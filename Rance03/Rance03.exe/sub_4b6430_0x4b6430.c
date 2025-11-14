// 函数: sub_4b6430
// 地址: 0x4b6430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t var_4 = ecx
char* ecx_1 = *(arg1 + 4)
struct partsengine::CGUIMessage::VTable** eax

if (&ecx_1[4] u> *(arg1 + 8))
label_4b6498:
    eax.b = 0
    return eax

int32_t esi_1 = 0
uint32_t edi_7 = ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
*(arg1 + 4) = &ecx_1[4]

if (edi_7 s> 0)
    do
        eax = sub_4b4a30(arg1)
        
        if (eax == 0)
            goto label_4b6498
        
        arg2(eax)
        esi_1 += 1
    while (esi_1 s< edi_7)

uint32_t eax_3
eax_3.b = 1
return eax_3
