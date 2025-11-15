// 函数: sub_606b20
// 地址: 0x606b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* ebp = arg1
int32_t* eax
int32_t* edi

if (arg2 != 0)
    if (arg2 u> 0xfffffff)
        sub_6d08ed()
        noreturn
    
    int32_t eax_2 = arg2 << 4
    
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
int32_t* result = sub_606f30(eax, ebp[1], *ebp, edi)
int32_t edx_1 = ebp[1]
void* ecx_2 = *ebp

if (ecx_2 != 0)
    int32_t var_18_4 = 0
    void* var_1c_1 = ecx_2
    sub_570210(ecx_2, edx_1)
    void* ecx_3 = *ebp
    result = sub_403160(ecx_3, (ebp[2] - ecx_3) s>> 4, 0x10)

ebp[2] = &edi[arg2 * 4]
ebp[1] = ((edx_1 - ecx_2) & 0xfffffff0) + edi
*ebp = edi
return result
