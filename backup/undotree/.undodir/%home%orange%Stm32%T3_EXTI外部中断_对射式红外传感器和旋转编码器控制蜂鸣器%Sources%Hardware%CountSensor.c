Vim�UnDo� �?hw�_�_���0��/jPZ��E<-jo   P   E  exti_init.EXTI_Trigger = EXTI_Trigger_Rising; // 下降沿都触发   #   (      -       -   -   -    c���    _�                     &       ����                                                                                                                                                                                                                                                                                                                            	          	          V       c˶�     �   '   )   O        #endif /* ifndef �   &   )   N        �   %   (   M        �   %   '   L    5��    %                      �                     �    %                                           �    %                  	   �             	       �    %                                         �    %                                         �    %                                         �    %                                         �    %                                         �    %                                         �    %                                         �    &                                            �    &                                         �    '                     $                     5�_�                    &   
    ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�     �   '   )   O        #endif /* ifndef DEBUG */�   %   '   O        #ifndef DEBUG5��    %   
                                     �    '                    ,                    5�_�                    )        ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�     �   (   )          �  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 一个芯片或者一个工程只能用一种分组, 所以分组只能初始化为同一种5��    (                      =      �               5�_�                    '        ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�     �   '   )   N    �   '   (   N    5��    '                                    �       5�_�                    '       ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�     �   &   '            5��    &                                           5�_�                    '       ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�     �   &   (   N      �  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 一个芯片或者一个工程只能用一种分组, 所以分组只能初始化为同一种5��    &                                          5�_�                    '       ����                                                                                                                                                                                                                                                                                                                            &          &   
       v   
    c˶�    �   &   (   N      �   NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); // 一个芯片或者一个工程只能用一种分组, 所以分组只能初始化为同一种5��    &                                        5�_�      	              I       ����                                                                                                                                                                                                                                                                                                                                                             c���     �   H   I          '    EXTI_ClearITPendingBit(EXTI_Line6);5��    H                      �	      (               5�_�      
           	   K       ����                                                                                                                                                                                                                                                                                                                                                             c��     �   K   M   M    �   K   L   M    5��    K                      �	              (       5�_�   	              
   #   (    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��#    �   "   $   N      Y  exti_init.EXTI_Trigger = EXTI_Trigger_Rising_Falling; // 上升沿和下降沿都触发5��    "   (                  �                     5�_�   
                 #   4    ����                                                                                                                                                                                                                                                                                                                            #   4       #   =          :    c��*    �   "   $   N      R  exti_init.EXTI_Trigger = EXTI_Trigger_Falling; // 上升沿和下降沿都触发5��    "   4                  �                     5�_�                    3   1    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c���     �   2   4   N      4  LED_init(RCC_APB2Periph_GPIOA, GPIOA, GPIO_Pin_5);5��    2   1                 {                    5�_�                    4        ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c���     �   3   5   N      .  LED_setStatus(GPIOA, GPIO_Pin_5, Bit_RESET);5��    3                     �                    5�_�                    J       ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c���    �   I   K   N           LED_turn(GPIOA, GPIO_Pin_5);5��    I                    �	                    5�_�                    J       ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c���     �   J   L   N    5��    J                      �	                     �    J                     �	                     �    J                      �	                     5�_�                    K        ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c���     �   J   K           5��    J                      �	                     5�_�                    I   
    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��      �   H   J   O          �   H   J   N    5��    H                      �	                     �    H                     �	                     5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��     �   H   J   O          if5��    H                     �	                     5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��     �   H   J   O          if()5��    H                  	   �	              	       �    H          	          �	      	              �    H                    �	                    �    H                 	   �	             	       �    H          	       =   �	      	       =       5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            I   /       I          v       c��
     �   H   J   O      E    if(GPIO_ReadInputDataBit(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin))5��    H                    �	                    5�_�                    I   $    ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��"     �   H   J   O      7    if(GPIO_ReadInputDataBit(GPIOB, uint16_t GPIO_Pin))5��    H   $              
   �	             
       5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��,     �   H   J   O      0    if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6))5��    H                     �	                     5�_�                    I   1    ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��/     �   H   J   O      1    if(!GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6))5��    H   1                  �	                     5�_�                    I   2    ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��/     �   I   K   P    �   H   K   O      3    if(!GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6)){}5��    H   2                 �	                     �    I                      �	                     �    I                     �	                    �    I                     �	                     �    I                      �	                     5�_�                    K        ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��1     �   J   K              }5��    J                      �	                     5�_�                    N        ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��2     �   N   P   P    �   N   O   P    5��    N                      F
                     5�_�                    J        ����                                                                                                                                                                                                                                                                                                                            I   4       I   $       v   $    c��4     �   I   J           5��    I                      �	                     5�_�                    J       ����                                                                                                                                                                                                                                                                                                                            J          M                 c��6    �   J   N   P           LED_turn(GPIOA, GPIO_Pin_2);       ++ sensorCount;   '    EXTI_ClearITPendingBit(EXTI_Line6);�   I   K   P          Buzzer_turn();5��    I                     �	                     �    J                     �	                     �    K                     
                     �    L                     '
                     5�_�                    L       ����                                                                                                                                                                                                                                                                                                                            L          L                 c��=     �   K   M   P            ++ sensorCount;5��    K                     
                     5�_�                    L       ����                                                                                                                                                                                                                                                                                                                            L          L                 c��>    �   K   M   P            sensorCount;5��    K                     
                     5�_�                     #   (    ����                                                                                                                                                                                                                                                                                                                            L          L                 c�Ѥ   	 �   "   $   P      F  exti_init.EXTI_Trigger = EXTI_Trigger_Falling; // 下降沿都触发5��    "                    �                    �    "                    �                    �    "                    �                    5�_�      !               H       ����                                                                                                                                                                                                                                                                                                                            L          L                 c��     �   G   H          7    /* 清除中断标志位防止重复申请中断 */5��    G                      q	      8               5�_�       "           !   K       ����                                                                                                                                                                                                                                                                                                                            K          K                 c��     �   K   M   O    �   K   L   O    5��    K                      �	              8       5�_�   !   &           "   L       ����                                                                                                                                                                                                                                                                                                                            K          K                 c��	     �   K   M   P      7    /* 清除中断标志位防止重复申请中断 */5��    K                     �	                     5�_�   "   '   #       &   #   (    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c�ґ    �   "   $   P      M  exti_init.EXTI_Trigger = EXTI_Trigger_Rising_Falling; // 下降沿都触发5��    "   (                  �                     5�_�   &   (           '   H   2    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c�Җ     �   G   I   P      2    if(!GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6)){5��    G   2                  �	                     �    G   3                 �	                    �    G   3                 �	                    �    G   3                 �	                    �    G   3                 �	                    �    G   3                 �	                    5�_�   '   )           (   H   6    ����                                                                                                                                                                                                                                                                                                                            H   K       H   6       v   6    c�ҝ     �   G   I   P      L    if(!GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6)){ // comment after the line5��    G   6                 �	                    �    G   Q                  �	                     �    G   N                  �	                     �    G   K                 �	                    5�_�   (   *           )   H   W    ����                                                                                                                                                                                                                                                                                                                            H   K       H   6       v   6    c�Ү    �   G   I   P      W    if(!GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6)){ // 下降沿触发消除电平抖动5��    G   W               e   �	              e       5�_�   )   -           *   #   (    ����                                                                                                                                                                                                                                                                                                                            H   K       H   6       v   6    c���    �   "   $   P      F  exti_init.EXTI_Trigger = EXTI_Trigger_Falling; // 下降沿都触发5��    "   (                 �                    �    "                    �                    �    "                    �                    �    "                    �                    �    "                    �                    �    "                    �                    �    "                    �                    �    "                    �                    5�_�   *       +       -   #   (    ����                                                                                                                                                                                                                                                                                                                            H          H                 c���    �   "   $   P      E  exti_init.EXTI_Trigger = EXTI_Trigger_Rising; // 下降沿都触发5��    "                    �                    �    "                    �                    �    "                    �                    5�_�   *   ,       -   +   H       ����                                                                                                                                                                                                                                                                                                                            H          H                 c��3    �   G   I   P      �    if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6)){ // 下降沿触发消除电平抖动, 如果是上升沿需要判断高电平，如果是上升沿和下降沿中断，则去除该判断5��    G                     p	                     5�_�   +               ,      "    ����                                                                                                                                                                                                                                                                                                                            H          H                 c��j    �         P      &  gpio_init.GPIO_Mode = GPIO_Mode_IPD;5��                        �                    �                        �                    �                        �                    �                        �                    �                        �                    �                        �                    �                     
   �             
       �              
          �      
              5�_�   "   $       &   #   H       ����                                                                                                                                                                                                                                                                                                                            J          J                 c��C     �   G   I        5��    G                      q	      3               5�_�   #   %           $   M       ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��D   
 �   L   N        5��    L                      #
                     5�_�   $               %   #   (    ����                                                                                                                                                                                                                                                                                                                            #   (       #   .          .    c��h    �   "   $   N      F  exti_init.EXTI_Trigger = EXTI_Trigger_Falling; // 下降沿都触发5��    "   (                  �                     5��