#pragma once

/* Each layer gets a name for readability.        */
/* The underscores don't mean anything - you can  */
/* have a layer called STUFF or any other name.   */
/* Layer names don't all need to be of the same   */
/* length, and you can also skip them entirely    */
/* and just use numbers.                          */

enum layer_number {
    _QWERTY = 0,
    _FUNC,
    _SYMB,
    _ADJUST,
};
