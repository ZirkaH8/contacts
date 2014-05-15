<?php
function contacts_entity_info_alter(&$info){

}

/**
 * @file
 * Contains Contacts entity add/edit form.
 */

/**
 * Add/edit form callback for Contacts entities.
 *
 * @param $form
 * @param $form_state
 * @param $contacts
 * @param string $op
 */
function contacts_form($form, &$form_state, $contacts, $op = 'edit') {

    $form['first_name'] = array(
        '#type' => 'textfield',
        '#title' => t('First name'),
        '#default_value' => isset($contacts->first_name) ? $contacts->first_name : '',
    );
    $form['last_name'] = array(
        '#type' => 'textfield',
        '#title' => t('Last name'),
        '#default_value' => isset($contacts->last_name) ? $contacts->last_name : '',
    );
    $form['user_id'] = array(
        '#type' => 'int',
        '#access' => FALSE,
    );
    $form['actions'] = array(
        '#type' => 'actions',
        'submit' => array(
            '#type' => 'submit',
            '#value' => t('Save'),
        ),
        'back' => array(
            '#type' => 'submit',
            '#value' => t('back'),
        ),
        'next' => array(
            '#type' => 'submit',
            '#value' => t('next'),
        ),
    );

    // Attach fields to the form.
    field_attach_form('contacts', $contacts, $form, $form_state);
    return $form;
}

/**
 * Submit callback for "contacts_form".
 *
 * @param $form
 * @param $form_state
 */
function contacts_form_submit($form, &$form_state) {
    dsm($form_state);
    global $user;
    if(!empty($user)) {
        $form_state['values']['user_id'] = $user->uid;
    }

    $contacts = entity_ui_form_submit_build_entity($form, $form_state);

    $contacts->save();

    $form_state['redirect'] = 'address-book';
}
