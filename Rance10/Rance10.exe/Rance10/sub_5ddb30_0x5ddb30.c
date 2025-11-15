// 函数: sub_5ddb30
// 地址: 0x5ddb30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
void** edi = arg3
int32_t* ebx = arg1
void** eax
int32_t* ecx
eax, ecx = sub_5dda40(arg1, edi)

if (eax != *ebx)
    __Smtx_lock_shared(&eax[5])
    int32_t ebp_1 = eax[4]
    __Smtx_unlock_shared(&eax[5])
    int32_t* edi_2 = arg3
    __Smtx_lock_shared(&edi_2[1])
    int32_t edi_3 = *edi_2
    ecx = __Smtx_unlock_shared(&edi_2[1])
    
    if (edi_3 u>= ebp_1)
        *arg2 = eax
        arg2[1].b = 0
        return arg2
    
    edi = arg3

int32_t* var_18_5 = ecx
arg3 = edi
void*** var_1c = &arg3
int32_t* eax_2 = sub_5ddc10(ecx)
sub_5ddc60(ebx, &arg3, eax, &eax_2[4], eax_2)
*arg2 = arg3
arg2[1].b = 1
return arg2
