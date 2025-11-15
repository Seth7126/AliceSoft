// 函数: sub_5c9170
// 地址: 0x5c9170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 2
void* esi = *arg1
void** result_1
sub_42eb70(esi + 0x138, &result_1, &var_8)
void** result = result_1
int32_t ebp

if (result != *(esi + 0x138))
    ebp = result[5]
else
    ebp = 0

if (arg1[0x87] s>= 2)
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    result = (*(*esi_1 + 0xa8))()

if (arg1[0x87] s< 2 || result.b == 0)
    result.b = 0
else
    result.b = 1

if (ebp s> 0 && result.b != 0)
    void* eax_3 = *arg1 + 0xb4
    int32_t ebp_1 = *(eax_3 + 0x14)
    int32_t edi_2 = *(eax_3 + 0x18)
    
    if (arg1[0xfd] == ebp_1 && arg1[0xfe] == edi_2)
        goto label_5c9223
    
    if (arg1[0x122].b == 0)
    label_5c923d:
        
        if (sub_575850(&arg1[0xfd], ebp_1, edi_2, sub_431af0(&arg1[1])).b == 0)
            result.b = 0
            return result
        
        if (arg1[0x122].b != 0)
            goto label_5c9255
    else
        sub_5758d0(&arg1[0xfd])
    label_5c9223:
        
        if (arg1[0x122].b == 0)
            goto label_5c923d
        
    label_5c9255:
        
        if (sub_5dc950(&arg1[0x10f]).b == 0)
            result.b = 0
            return result
        
        if (sub_5dc950(&arg1[0x119]).b == 0)
            result.b = 0
            return result
else if (arg1[0x122].b != 0)
    sub_5758d0(&arg1[0xfd])

result.b = 1
return result
