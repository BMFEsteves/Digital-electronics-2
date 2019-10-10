# ifndef GPIO_H_INCLUDED
# define GPIO_H_INCLUDED


# include < avr / io .h >


void GPIO_config_output ( volatile uint8_t * reg_name , uint8_t pin_num ) ;
void GPIO_config_input_nopull ( volatile uint8 t *reg_name , uint8 t pin num ) ;
void GPIO_config_input_pullup ( volatile uint8 t *reg_name , uint8 t pin num ) ;
void GPIO_write ( volatile uint8 t *reg_name , uint8 t pin num , uint8 t pin val ) ;
void GPIO_toggle ( volatile uint8 t *reg_name , uint8 t pin num ) ;
void GPIO_read ( volatile uint8 t *reg_name , uint8 t pin num ) ;

# endif /* GPIO_H_INCLUDED */