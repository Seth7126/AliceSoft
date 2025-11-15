// 函数: sub_422580
// 地址: 0x422580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* edi = arg1
int32_t* eax
int32_t* esi

if (arg2 != 0)
    if (arg2 u> 0x1fffffff)
        sub_6d08ed()
        noreturn
    
    int32_t eax_1 = arg2 << 3
    
    if (eax_1 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_1)
        esi = eax
    else
        if (eax_1 + 0x23 u<= eax_1)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_1 + 0x23)
        esi = (eax + 0x23) & 0xffffffe0
        esi[-1] = eax
else
    esi = nullptr

int32_t* var_18_3 = arg1
int32_t var_1c = 0
int32_t* var_20 = arg1
sub_423080(eax, edi[1], *edi, esi)
void* ecx_2 = *edi
int32_t ebp_2 = (edi[1] - ecx_2) s>> 3

if (ecx_2 != 0)
    sub_403160(ecx_2, (edi[2] - ecx_2) s>> 3, 8)

edi[2] = &esi[arg2 * 2]
void* result = &esi[ebp_2 * 2]
edi[1] = result
*edi = esi
return result
