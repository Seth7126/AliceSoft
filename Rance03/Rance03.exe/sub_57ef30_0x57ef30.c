// 函数: sub_57ef30
// 地址: 0x57ef30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
int32_t ecx = arg1[1]
void* eax

if (edi u< ecx)
    eax = *arg1

if (edi u< ecx && eax u<= edi)
    if (ecx == arg1[2])
        int32_t var_10_1 = ecx
        sub_57f200(arg1)
    
    edi = (edi - eax) s/ 0xbc * 0xbc + *arg1
else if (ecx == arg1[2])
    int32_t var_10_2 = ecx
    sub_57f200(arg1)

struct sealengine::CPolyFace::VTable** ebx = arg1[1]

if (ebx != 0)
    int32_t (__fastcall* var_10_3)(struct sealengine::CPolyVertex::VTable** arg1) = sub_5855a0
    *ebx = &sealengine::CPolyFace::`vftable'
    sub_69b6c8(&ebx[1], edi + 4, 0x3c, 3, sub_5800a0)
    eax.b = *(edi + 0xb8)
    ebx[0x2e].b = eax.b

arg1[1] += 0xbc
