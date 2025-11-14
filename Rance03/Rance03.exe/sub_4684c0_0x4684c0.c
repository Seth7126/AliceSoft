// 函数: sub_4684c0
// 地址: 0x4684c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t eax_7

if (*arg2 != arg2[1])
    int32_t var_1c
    char eax_4 = sub_40d280(sub_468250(arg1, &var_1c), *arg2)
    int32_t var_8
    
    if (var_8 u>= 0x10)
        j__free(var_1c)
    
    if (eax_4 == 0)
        int32_t* eax_5 = *arg2
        int32_t var_20
        int32_t var_34_3 = var_20
        sub_468940(eax_5, arg2[1], &eax_5[6], eax_5)
        void* ecx_2 = arg2[1]
        sub_4107c0(ecx_2 - 0x18, ecx_2)
        arg2[1] -= 0x18
        
        if (*arg2 == arg2[1])
            sub_69a5bc(eax_1 ^ &var_24)
            return arg1
        
        for (int32_t* i = *(arg1 + 0x20); i != *(arg1 + 0x24); i = &i[1])
            *i
            eax_7 = sub_4684c0(arg2)
            
            if (eax_7 != 0)
                goto label_46857f

eax_7 = 0
label_46857f:
sub_69a5bc(eax_1 ^ &var_24)
return eax_7
