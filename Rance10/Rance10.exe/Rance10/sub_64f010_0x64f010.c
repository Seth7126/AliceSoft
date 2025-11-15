// 函数: sub_64f010
// 地址: 0x64f010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_30
int32_t eax_1 = __security_cookie ^ &var_30
var_30 = arg2
void* var_8 = arg1
bool cond:0 = *(arg1 + 0xe0) == 0
void* esi = *(arg1 + 0x198)
int32_t* ecx = *(arg1 + 0x18)
int128_t xmm0 = *(esi + 0xc)
int32_t var_28 = *ecx
int32_t eax_4 = ecx[1]
int128_t var_20 = xmm0
int64_t xmm0_1 = *(esi + 0x1c)

if (not(cond:0) && *(esi + 0x24) == 0)
    char eax_5 = sub_64e5d0(&var_28, (*(esi + 0x28)).b)
    
    if (eax_5 == 0)
        @__security_check_cookie@4(eax_1 ^ &var_30)
        return eax_5

int32_t i = 0

if (*(arg1 + 0x130) s> 0)
    void* ebp_1 = arg1 + 0x134
    
    do
        int32_t eax_6 = *ebp_1
        void* edx_2 = &var_20:8 + (eax_6 << 2)
        void* ecx_4 = *(arg1 + (eax_6 << 2) + 0x118)
        int32_t eax_8 = *(ecx_4 + 0x14)
        
        if (sub_64ee40(eax_8, *(var_30 + (i << 2)), &var_28, *edx_2, *(esi + (eax_8 << 2) + 0x2c), 
                *(esi + (*(ecx_4 + 0x18) << 2) + 0x3c)) == 0)
            @__security_check_cookie@4(eax_1 ^ &var_30)
            return 0
        
        ebp_1 += 4
        int16_t* eax_11 = *(var_30 + (i << 2))
        i += 1
        *edx_2 = sx.d(*eax_11)
    while (i s< *(arg1 + 0x130))

int128_t xmm0_2 = var_20
**(arg1 + 0x18) = var_28
*(*(arg1 + 0x18) + 4) = eax_4
*(esi + 0xc) = xmm0_2
*(esi + 0x1c) = xmm0_1
int32_t eax_15 = *(arg1 + 0xe0)

if (eax_15 != 0)
    if (*(esi + 0x24) == 0)
        *(esi + 0x24) = eax_15
        *(esi + 0x28) = (*(esi + 0x28) + 1) & 7
    
    *(esi + 0x24) -= 1

eax_15.b = 1
@__security_check_cookie@4(eax_1 ^ &var_30)
return eax_15
