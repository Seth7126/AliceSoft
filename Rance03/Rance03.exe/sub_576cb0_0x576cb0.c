// 函数: sub_576cb0
// 地址: 0x576cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2
char* ecx = *(ebp + 4)
struct sealengine::CPOLMaterial::VTable** eax

if (&ecx[4] u> *(ebp + 8))
label_576d1e:
    eax.b = 0
    return eax

int32_t esi_1 = 0
uint32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(ebp + 4) = &ecx[4]

if (edi_7 s> 0)
    do
        eax = sub_576d30(arg1, ebp)
        arg2 = eax
        
        if (eax == 0)
            goto label_576d1e
        
        sub_412de0(&arg1[3], &arg2)
        esi_1 += 1
    while (esi_1 s< edi_7)

uint32_t eax_3
eax_3.b = 1
return eax_3
