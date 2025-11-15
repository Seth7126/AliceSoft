// 函数: sub_4958d0
// 地址: 0x4958d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2
int32_t* ebp = arg1
char* eax
char* edi

if (ebx != 0)
    if (ebx u> 0x5555555)
        sub_6d08ed()
        noreturn
    
    int32_t eax_2 = ebx * 0x30
    
    if (eax_2 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_2)
        edi = eax
    else
        if (eax_2 + 0x23 u<= eax_2)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_2 + 0x23)
        edi = &eax[0x23] & 0xffffffe0
        *(edi - 4) = eax
else
    edi = nullptr

int32_t* var_1c_3 = arg1
int32_t var_20 = 0.d
int32_t* var_24 = arg1
sub_4959e0(eax, ebp[1], *ebp, edi)
int32_t eax_3 = ebp[1]
int32_t* i = *ebp
char var_8
var_8.d = eax_3
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x2aaaaaab, eax_3 - i)
int32_t edx_2 = edx_1 s>> 3

if (i != 0)
    if (i != 0)
        do
            sub_408940(i)
            i = &i[0xc]
        while (i != 0)
        
        ebx = arg2
    
    void* esi = *ebp
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x2aaaaaab, ebp[2] - esi)
    int32_t edx_4 = edx_3 s>> 3
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x30)

ebp[2] = &edi[ebx * 0x30]
void* result = &edi[((edx_2 u>> 0x1f) + edx_2) * 0x30]
ebp[1] = result
*ebp = edi
return result
