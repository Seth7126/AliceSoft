// 函数: sub_5c9040
// 地址: 0x5c9040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_18 = &var_4
int32_t var_10 = 2
void* esi = *arg1
void** result_1
sub_42eb70(esi + 0x138, &result_1, &var_10)
void** result = result_1
int32_t ebp_1

if (result != *(esi + 0x138))
    ebp_1 = result[5]
else
    ebp_1 = 0

if (arg1[0x87] s>= 2)
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    result = (*(*esi_1 + 0xa8))()

if (arg1[0x87] s< 2 || result.b == 0)
    result.b = 0
else
    result.b = 1

if (ebp_1 s> 0 && result.b != 0)
    void* eax_2 = *arg1
    int32_t esi_2 = arg1[0xfb]
    void** result_2 = *(eax_2 + 0xcc)
    int32_t ebp_2 = *(eax_2 + 0xc8)
    result_1 = result_2
    
    if (esi_2 != sub_5c9980(arg1) || arg1[0xf8] != ebp_2 || arg1[0xf9] != result_2)
        result.b = 1
    else
        result.b = 0
    
    if (arg1[0xfc].b == 0 || result.b != 0)
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_3 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        int32_t eax_3 = sub_5c9980(arg1)
        result = sub_5ca560(&arg1[0xf6], ebp_2, result_1, 1, eax_3, 1, esi_3)
        
        if (result.b == 0)
            *var_18
            return result
else if (arg1[0xfc].b != 0)
    sub_5ca6e0(&arg1[0xf6])

result.b = 1
*var_18
return result
