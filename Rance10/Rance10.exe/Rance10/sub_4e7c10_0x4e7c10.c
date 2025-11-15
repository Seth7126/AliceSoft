// 函数: sub_4e7c10
// 地址: 0x4e7c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
void* esi = *(arg1 + 0xdc)
*(arg1 + 0x1ec) = 0
sub_4eec50(esi, 0x10, 1)
void* ebx = *(esi + 0x74)
void* esi_1 = *(arg1 + 0xd8)
sub_4eec50(esi_1, 0x10, 1)
void* eax = *(esi_1 + 0x74)

if (*(ebx + 0x40) != 0)
    *(ebx + 0x40) = 0

if (*(eax + 0x40) != 0)
    *(eax + 0x40) = 0

*(*(arg1 + 0xd8) + 0x1a8) = 1
*(*(arg1 + 0xdc) + 0x1a8) = 1
int32_t result

if (*(arg1 + 0xf1) != 0)
    if (*(arg1 + 0xf0) == 0)
        result = sub_4e7880(arg1)
    else
        sub_4e7370(arg1)
        sub_4e7520(arg1)
        result = sub_4e76d0(arg1)
else if (*(arg1 + 0xf0) == 0)
    result = sub_4e7110(arg1)
else
    sub_4e6bc0(arg1)
    sub_4e6db0(arg1)
    result = sub_4e6f60(arg1)

if (*(arg1 + 0x1e0) == 0)
    void* esi_2 = *(ebx + 0x44)
    sub_555e00(esi_2, 0x13, 1)
    sub_55f4d0(*(esi_2 + 0x80), arg1 + 0x100)
    void* esi_3 = *(ebx + 0x44)
    int32_t ebp_1 = *(arg1 + 0x1e4)
    sub_555e00(esi_3, 0x13, 1)
    void* esi_4 = *(esi_3 + 0x80)
    
    if (*(esi_4 + 0x40) != ebp_1)
        *(esi_4 + 0x40) = ebp_1
        sub_55d550(esi_4)
        *(esi_4 + 0xd4) = 1
    
    void* esi_5 = *(ebx + 0x44)
    int32_t ebp_2 = *(arg1 + 0x1e8)
    sub_555e00(esi_5, 0x13, 1)
    void* esi_6 = *(esi_5 + 0x80)
    
    if (*(esi_6 + 0x44) != ebp_2)
        *(esi_6 + 0x44) = ebp_2
        sub_55d550(esi_6)
        *(esi_6 + 0xd4) = 1
    
    void* esi_7 = *(ebx + 0x44)
    sub_555e00(esi_7, 0x13, 1)
    result = sub_55d4d0(*(esi_7 + 0x80), arg1 + 0x1c4)

var_4
return result
