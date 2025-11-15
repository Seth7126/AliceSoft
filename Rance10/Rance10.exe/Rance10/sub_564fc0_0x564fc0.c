// 函数: sub_564fc0
// 地址: 0x564fc0
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
sub_5655b0(eax, edi[1], *edi, esi)
int32_t edx_1 = edi[1]
void* ecx_2 = *edi

if (ecx_2 != 0)
    int32_t var_18_4 = 0
    void* var_1c_1 = ecx_2
    Concurrency::details::Etw::Etw(ecx_2, edx_1)
    void* ecx_3 = *edi
    sub_403160(ecx_3, (edi[2] - ecx_3) s>> 3, 8)

edi[2] = &esi[arg2 * 2]
void* result = &esi[((edx_1 - ecx_2) s>> 3) * 2]
edi[1] = result
*edi = esi
return result
