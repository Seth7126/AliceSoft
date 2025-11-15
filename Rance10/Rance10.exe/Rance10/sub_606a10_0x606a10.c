// 函数: sub_606a10
// 地址: 0x606a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* ebp = arg1
int32_t* eax
int32_t* edi

if (arg2 != 0)
    if (arg2 u> 0x9249249)
        sub_6d08ed()
        noreturn
    
    int32_t eax_3 = arg2 * 0x1c
    
    if (eax_3 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_3)
        edi = eax
    else
        if (eax_3 + 0x23 u<= eax_3)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_3 + 0x23)
        edi = (eax + 0x23) & 0xffffffe0
        edi[-1] = eax
else
    edi = nullptr

int32_t* var_18_3 = arg1
int32_t var_1c = 0
int32_t* var_20 = arg1
sub_55c480(eax, ebp[1], *ebp, edi)
void* esi = *ebp
int32_t ecx_6 = (ebp[1] - esi) s/ 0x1c

if (esi != 0)
    int32_t var_18_4 = ecx_6
    int32_t var_1c_1 = ecx_6
    sub_55c3e0(esi, ebp[1])
    void* esi_1 = *ebp
    sub_403160(esi_1, (ebp[2] - esi_1) s/ 0x1c, 0x1c)

ebp[2] = &edi[arg2 * 7]
void* result = &edi[ecx_6 * 7]
ebp[1] = result
*ebp = edi
return result
