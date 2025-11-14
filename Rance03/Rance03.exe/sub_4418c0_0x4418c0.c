// 函数: sub_4418c0
// 地址: 0x4418c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct anteater::CADVScene::VTable** var_4 = arg1
struct anteater::CADVScene::VTable** eax = sub_69adc6(0x58)
struct anteater::CADVScene::VTable** edi

if (eax == 0)
    edi = nullptr
else
    edi = sub_4408d0(eax)

var_4 = edi

if (sub_440a00(edi, arg2) == 0)
    if (edi != 0)
        (*edi)->vFunc_0(1)
    
    return 0

int32_t* edi_1 = arg1[1]
int32_t* eax_4 = sub_441d60(edi_1, edi_1[1], &var_4)
int32_t eax_5 = arg1[2]

if (0x15555554 - eax_5 u< 1)
    sub_69a551("list<T> too long")
    noreturn

arg1[2] = eax_5 + 1
edi_1[1] = eax_4
*eax_4[1] = eax_4

while (arg1[2] s>= arg1[3])
    int32_t* ecx_6 = *(arg1[1]->vFunc_0 + 8)
    
    if (ecx_6 != 0)
        (**ecx_6)(1)
    
    int32_t* vFunc_0 = arg1[1]->vFunc_0
    *vFunc_0[1] = *vFunc_0
    *(*vFunc_0 + 4) = vFunc_0[1]
    arg1[2] -= 1
    j__free(vFunc_0)

int32_t result
result.b = 1
return result
