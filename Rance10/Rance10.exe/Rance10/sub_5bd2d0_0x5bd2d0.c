// 函数: sub_5bd2d0
// 地址: 0x5bd2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
void* eax
void* esi

if (arg2 != 0)
    if (arg2 u> 0x2222222)
        sub_6d08ed()
        noreturn
    
    int32_t eax_4 = arg2 * 0x78
    
    if (eax_4 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_4)
        esi = eax
    else
        if (eax_4 + 0x23 u<= eax_4)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_4 + 0x23)
        esi = (eax + 0x23) & 0xffffffe0
        *(esi - 4) = eax
else
    esi = nullptr

int32_t* var_14_3 = arg1
int32_t var_18 = arg2
int32_t* var_1c = arg1
sub_5bf640(eax, ebx[1], *ebx, esi)
int32_t ecx_3 = ebx[1] - *ebx
int32_t eax_6 = *ebx

if (eax_6 != 0)
    sub_403160(*ebx, (ebx[2] - eax_6) s/ 0x78, 0x78)

ebx[2] = esi + arg2 * 0x78
void* result = esi + ecx_3 s/ 0x78 * 0x78
ebx[1] = result
*ebx = esi
return result
