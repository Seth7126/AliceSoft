// 函数: sub_576430
// 地址: 0x576430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* ebp = arg1
int32_t* eax
int32_t* edi

if (arg2 != 0)
    if (arg2 u> 0x15555555)
        sub_6d08ed()
        noreturn
    
    int32_t eax_2 = arg2 * 0xc
    
    if (eax_2 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_2)
        edi = eax
    else
        if (eax_2 + 0x23 u<= eax_2)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_2 + 0x23)
        edi = (eax + 0x23) & 0xffffffe0
        edi[-1] = eax
else
    edi = nullptr

int32_t* var_18_3 = arg1
int32_t var_1c = 0
int32_t* var_20 = arg1
sub_4d7dc0(eax, ebp[1], *ebp, edi)
int32_t* esi = *ebp
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x2aaaaaab, ebp[1] - esi)
int32_t edx_2 = edx_1 s>> 1
int32_t ecx_6 = (edx_2 u>> 0x1f) + edx_2

if (esi != 0)
    int32_t var_18_4 = ecx_6
    int32_t var_1c_1 = ecx_6
    sub_4ac600(esi, ebp[1])
    void* esi_1 = *ebp
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = muls.dp.d(0x2aaaaaab, ebp[2] - esi_1)
    int32_t edx_5 = edx_4 s>> 1
    sub_403160(esi_1, (edx_5 u>> 0x1f) + edx_5, 0xc)

ebp[2] = &edi[arg2 * 3]
void* result = &edi[ecx_6 * 3]
ebp[1] = result
*ebp = edi
return result
