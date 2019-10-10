# include "gpio.h"
#define DDR(x) (*(&x - 1))


 // test
/* Functions - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
void GPIO_config_output ( volatile uint8_t * reg_name , uint8_t pin_num ){

* reg_name |= _BV ( pin_num ) ;
}


void GPIO_config_output ( volatile uint8_t * reg_name , uint8_t pin_num ) {
    
* reg_name &= ~_BV ( pin_num ) ;

}

void GPIO_config_input_nopull ( volatile uint8 t *reg_name , uint8 t pin num ) {

    * reg_name &= _BV ( pin_num ) ;
    DDR(*reg_name) &= ~_BV(pin_num);
}

void GPIO_config_input_pullup ( volatile uint8 t *reg_name , uint8 t pin num ) {
    
* reg_name |= _BV ( pin_num ) ;
    DDR(*reg_name) &= ~_BV(pin_num);
}

void GPIO_write ( volatile uint8 t *reg_name , uint8 t pin num , uint8 t pin val ) {

      if(pin_val==1){
            
            *reg_name |= _BV ( pin_num ) ;


      }


}

void GPIO_toggle ( volatile uint8 t *reg_name , uint8 t pin num ) {
      
      *reg_name |= _BV ( pin_num ) ;


}

void GPIO_read ( volatile uint8 t *reg_name , uint8 t pin num ) {
    
  

}