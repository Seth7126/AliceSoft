// 函数: sub_56bb80
// 地址: 0x56bb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* edi = arg1
void* eax
void* esi

if (arg2 != 0)
    if (arg2 u> 0x12f684b)
        sub_6d08ed()
        noreturn
    
    int32_t eax_1 = arg2 * 0xd8
    
    if (eax_1 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_1)
        esi = eax
    else
        if (eax_1 + 0x23 u<= eax_1)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_1 + 0x23)
        esi = (eax + 0x23) & 0xffffffe0
        *(esi - 4) = eax
else
    esi = nullptr

int32_t* var_18_3 = arg1
int32_t var_1c = 0
int32_t* var_20 = arg1
sub_56bc60(eax, edi[1], *edi, esi)
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x4bda12f7, edi[1] - *edi)
int32_t eax_3 = *edi
int32_t edx_2 = edx_1 s>> 6

if (eax_3 != 0)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = muls.dp.d(0x4bda12f7, edi[2] - eax_3)
    int32_t edx_4 = edx_3 s>> 6
    sub_403160(*edi, (edx_4 u>> 0x1f) + edx_4, 0xd8)

edi[2] = arg2 * 0xd8 + esi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0xd8 + esi
edi[1] = result
*edi = esi
return result
