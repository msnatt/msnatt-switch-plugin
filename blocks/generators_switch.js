Blockly.JavaScript['switch_set'] =
function(block) {

  var state =
    block.getFieldValue('STATE');

  var code = '';

  if(state == 'TRUE') {

    code = 'mySwitch.set(true);\n';

  } else {

    code = 'mySwitch.set(false);\n';
  }

  return code;
};