// 函数: sub_58c390
// 地址: 0x58c390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
int32_t* ebx = arg1
int32_t* eax
int32_t* edi

if (ebp != 0)
    if (ebp u> 0x3fffffff)
        sub_6d08ed()
        noreturn
    
    int32_t eax_1 = ebp << 2
    
    if (eax_1 u< 0x1000)
        eax, arg1 = sub_6e810c(eax_1)
        edi = eax
    else
        if (eax_1 + 0x23 u<= eax_1)
            sub_6d08ed()
            noreturn
        
        eax, arg1 = sub_6e810c(eax_1 + 0x23)
        edi = (eax + 0x23) & 0xffffffe0
        edi[-1] = eax
else
    edi = nullptr

int32_t* var_1c_3 = arg1
int32_t var_20 = 0.d
int32_t* var_24 = arg1
sub_40a3d0(eax, ebx[1], *ebx, edi)
int32_t eax_2 = ebx[1]
int32_t* esi = *ebx
int32_t ecx_4 = (eax_2 - esi) s>> 2

if (esi != 0)
    if (esi != eax_2)
        do
            sub_570260(esi)
            esi = &esi[1]
        while (esi != eax_2)
        
        ebp = arg2
    
    void* ecx_6 = *ebx
    sub_403160(ecx_6, (ebx[2] - ecx_6) s>> 2, 4)

ebx[2] = &edi[ebp]
void* result = &edi[ecx_4]
ebx[1] = result
*ebx = edi
return result
