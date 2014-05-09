<?php
/**
 * @file
 * features_for_contacts.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function features_for_contacts_default_rules_configuration() {
  $items = array();
  $items['rules_apply_category'] = entity_import('rules_config', '{ "rules_apply_category" : {
      "LABEL" : "apply category",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "contacts" : { "label" : "contacts", "type" : "contacts" },
        "term" : { "label" : "term", "type" : "taxonomy_term" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "data_set" : { "data" : [ "contacts:field-category" ], "value" : [ "term" ] } }
            ],
            "LABEL" : "select"
          }
        }
      ]
    }
  }');
  return $items;
}
