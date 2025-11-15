// 函数: sub_4f5190
// 地址: 0x4f5190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
void* esi = *(edi + 0x58)
void* ecx = *(esi + 4)

if (ecx != 0)
    esi, edi = sub_4f01b0(ecx)

void* ecx_1 = *(esi + 0xc)

if (ecx_1 != 0)
    esi, edi = sub_4f01b0(ecx_1)

int32_t result = sub_4fb6b0(esi + 0x10)
int32_t* esi_1 = *(edi + 0x5c)
int32_t ebx = 0
uint32_t ebp_3 = (*(edi + 0x60) - esi_1 + 3) u>> 2

if (esi_1 u> *(edi + 0x60))
    ebp_3 = 0

if (ebp_3 != 0)
    do
        void* edi_1 = *esi_1
        void* ecx_3 = *(edi_1 + 4)
        
        if (ecx_3 != 0)
            esi_1, edi_1 = sub_4f01b0(ecx_3)
        
        void* ecx_4 = *(edi_1 + 0xc)
        
        if (ecx_4 != 0)
            esi_1, edi_1 = sub_4f01b0(ecx_4)
        
        result = sub_4fb6b0(edi_1 + 0x10)
        ebx += 1
        esi_1 = &esi_1[1]
    while (ebx != ebp_3)

return result
