// 函数: sub_571030
// 地址: 0x571030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

int128_t* result

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_c_2 = arg1
        sub_571180(esi)
    
    result = esi[1]
    
    if (result != 0)
        *result = *arg2
        result[1] = arg2[1]
else
    if (eax == esi[2])
        int32_t* var_c_1 = arg1
        sub_571180(esi)
    
    result = esi[1]
    
    if (result != 0)
        int128_t* edi = ((arg2 - arg1) & 0xffffffe0) + *esi
        *result = *edi
        result[1] = edi[1]

esi[1] += 0x20
return result
