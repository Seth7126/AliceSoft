// 函数: sub_5bd3b0
// 地址: 0x5bd3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
int128_t* eax
int128_t* esi

if (arg2 != 0)
    if (arg2 u> 0xaaaaaaa)
        sub_6d08ed()
        noreturn
    
    int32_t eax_2 = arg2 * 0x18
    
    if (eax_2 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_2)
        esi = eax
    else
        if (eax_2 + 0x23 u<= eax_2)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_2 + 0x23)
        esi = (eax + 0x23) & 0xffffffe0
        *(esi - 4) = eax
else
    esi = nullptr

int32_t* var_14_3 = arg1
int32_t var_18 = arg2
int32_t* var_1c = arg1
sub_568a20(eax, ebx[1], *ebx, esi)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
int32_t eax_4 = *ebx
int32_t edx_2 = edx_1 s>> 2

if (eax_4 != 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x2aaaaaab, ebx[2] - eax_4)
    int32_t edx_4 = edx_3 s>> 2
    sub_403160(*ebx, (edx_4 u>> 0x1f) + edx_4, 0x18)

ebx[2] = esi + arg2 * 0x18
void* result = esi + ((edx_2 u>> 0x1f) + edx_2) * 0x18
ebx[1] = result
*ebx = esi
return result
