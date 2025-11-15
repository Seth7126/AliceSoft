// 函数: sub_4f4f70
// 地址: 0x4f4f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

data_7fcb2a = 1
int32_t edi = *(arg1 + 0x68)

if (edi == 0)
    if (*(arg1 + 0x5c) == *(arg1 + 0x60))
        void* eax_2 = sub_404080(arg1 + 0x30)
        sub_4f4360(arg1, sub_404080(arg1 + 0x30), eax_2, 0)
    
    edi = *(*(arg1 + 0x5c) + ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 << 2) - 4)

int32_t* esi = *(arg1 + 0x5c)
int32_t edx = arg3
uint32_t ebp_3 = (*(arg1 + 0x60) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x60))
    ebp_3 = 0

if (ebp_3 != 0)
    void* eax_5 = arg1 + 0x6c
    int32_t ebx_1 = 0
    void* var_8_1 = eax_5
    
    do
        void** ecx_6 = *esi
        void* var_1c_1 = eax_5
        eax_5.b = edi == ecx_6
        sub_4f3670(ecx_6, arg2, edx, arg4, arg5, arg6, eax_5.b, ecx_6)
        eax_5 = var_8_1
        esi = &esi[1]
        edx = arg3
        ebx_1 += 1
    while (ebx_1 != ebp_3)

void** ecx_7 = *(arg1 + 0x58)
void* var_1c_2 = arg1 + 0x6c
void* eax_7
eax_7.b = edi == ecx_7
void* result = sub_4f3670(ecx_7, arg2, edx, arg4, arg5, arg6, eax_7.b, ecx_7)
data_7fcb2a = 0
return result
