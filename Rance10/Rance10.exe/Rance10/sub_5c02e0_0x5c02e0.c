// 函数: sub_5c02e0
// 地址: 0x5c02e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg5
int32_t* edi = arg2
void arg_10

if (edi != arg4 && esi != arg6)
    bool cond:1_1
    
    do
        void* eax = *edi
        void* ecx = *esi
        int32_t ebx_1 = *(eax + 0x18)
        int32_t edx = *(ecx + 0x18)
        
        if (edx s< ebx_1)
        label_5c034b:
            sub_5c04e0(&arg_10, esi)
            esi = &esi[1]
            cond:1_1 = esi != arg6
        else
            if (edx s<= ebx_1)
                int32_t edx_1 = *(ecx + 0x1c)
                int32_t ebx_2 = *(eax + 0x1c)
                
                if (edx_1 s< ebx_2)
                    goto label_5c034b
                
                if (edx_1 s<= ebx_2)
                    edx_1.b = *(ecx + 0x75)
                    ebx_2.b = *(eax + 0x75)
                    
                    if (edx_1.b u< ebx_2.b)
                        goto label_5c034b
                    
                    if (edx_1.b u<= ebx_2.b)
                        ecx.b = *(ecx + 0x22)
                        eax.b = *(eax + 0x22)
                        
                        if (ecx.b u< eax.b)
                            goto label_5c034b
            
            sub_5c04e0(&arg_10, edi)
            edi = &edi[1]
            cond:1_1 = edi != arg4
    while (cond:1_1)

int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c_3 = arg7
void var_14
int32_t eax_3 = sub_5bf9e0(arg7, edi, &var_14, arg4, 0)[4]
sub_5bed30(&var_14)
int32_t var_38_1 = 0
int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_4 = eax_3
int32_t eax_6 = sub_5bf9e0(eax_3, esi, &var_14, arg6, 0)[4]
sub_5bed30(&var_14)
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
arg3[4] = eax_6
sub_5bed30(&arg_10)
return arg3
