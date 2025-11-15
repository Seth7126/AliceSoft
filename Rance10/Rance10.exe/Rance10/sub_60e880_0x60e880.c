// 函数: sub_60e880
// 地址: 0x60e880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg3
uint32_t ebx_3 = (arg2 - esi + 3) u>> 2
int32_t edi = 0

if (esi u> arg2)
    ebx_3 = 0

if (ebx_3 == 0)
    return arg4

struct IDebugFileObjType::sys43vm::CObjType::VTable** edx = arg4
int32_t* ecx = &edx[5]

do
    if (edx != 0)
        int32_t eax = *esi
        *edx = &sys43vm::CObjType::`vftable'{for `IDebugFileObjType'}
        ecx[-4] = eax
        ecx[-3] = 0xffffffff
        ecx[-2] = 0
        ecx[-1] = 0
        *ecx = 0
    
    edi += 1
    edx = &edx[6]
    ecx = &ecx[6]
    esi = &esi[1]
while (edi != ebx_3)

return edx
