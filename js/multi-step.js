/*
(function ($) {
    Drupal.behaviors.addressbook = {
        attach: function (context, settings) {
             function hide(){
                    $('.form-item-last-name').hide();
                    $('.form-item-first-name').hide();
                    $('#edit-field-category').hide();
                    $('#edit-field-photo').hide();
                    $('#field-phone-add-more-wrapper').hide();
                    $('#edit-field-email').hide();
                    $('#field-birth-day-add-more-wrapper').hide();
                    $('#edit-field-note').hide();
                    $('#edit-back').hide();
                    $('#edit-submit').hide();
                    $('#edit-next').hide();
                $( '#edit-field-photo-und-0-upload-button').hide();
            }
    if(typeof  page == 'undefined')
    {
        var page = 1;
        pageCheck();
        $('#edit-next').bind('click',function(e){
            page++;

            pageCheck();
            e.preventDefault();
        });
        $('#edit-back').bind('click',function(e){
            page--;

            pageCheck();
            e.preventDefault();
        });
    }

           function pageCheck()
           {
               if (page == 1){

                   hide();
                   $('.form-item-first-name').show();
                   $('.form-item-last-name').show();
                   $('#edit-field-category').show();
                   $('#edit-next').show();
               }else if(page == 2)
               {
                   hide();
                   $('#edit-field-photo').show();
                   $('#edit-back').show();
                   $('#edit-next').show();

               }
               else
               {
                    hide();
                   $('#field-phone-add-more-wrapper').show();
                   $('#edit-field-email').show();
                   $('#field-birth-day-add-more-wrapper').show();
                   $('#edit-field-note').show();
                   $('#edit-back').show();
                   $('#edit-submit').show();
               }
           }


        }
    };


})(jQuery);
*/
