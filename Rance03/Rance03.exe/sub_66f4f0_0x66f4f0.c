// 函数: sub_66f4f0
// 地址: 0x66f4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg5
int32_t* edi = arg2
int32_t* result = arg3
int32_t arg_10

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        arg3.b = edi[9].b
        
        if (*(esi + 0x24) == 0)
            if (arg3.b == 0)
                if (*esi s>= *edi)
                    goto label_66f550
                
                goto label_66f53f
            
            sub_66f8f0(&arg_10, esi)
            esi += 0x28
            cond:0_1 = esi != arg6
        else if (arg3.b == 0 || *esi s>= *edi)
        label_66f550:
            sub_66f8f0(&arg_10, edi)
            edi = &edi[0xa]
            cond:0_1 = edi != arg4
        else
        label_66f53f:
            sub_66f8f0(&arg_10, esi)
            esi += 0x28
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c_4 = arg7
int32_t var_14
int32_t eax_2 = sub_66bb90(arg7, edi, &var_14, arg4, 0, 0)[4]
int32_t eax_3 = var_14

if (eax_3 != 0)
    j__free(eax_3)

int32_t var_34_1 = 0
int32_t var_30_1 = 0
int32_t var_2c_6 = eax_2
sub_66bb90(eax_2, esi, result, arg6, 0, 0)
int32_t eax_5 = arg_10

if (eax_5 != 0)
    j__free(eax_5)

return result
