// 函数: sub_503c60
// 地址: 0x503c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x2c) == *(arg1 + 0x30))
    int32_t eax
    eax.b = 1
    return eax

sub_505830(arg1 + 0xc)
void* ecx_2 = *(arg1 + 4)
*(arg1 + 0x4c) = 1

if (ecx_2 != 0)
    struct partsengine::CSpriteEngineWrapper::VTable* esi_1 =
        sub_481a40(ecx_2, arg1 + 0x28, &var_4:3)
    
    if (esi_1 != 0)
        if (var_4:3.b == 0 && sub_5066b0(arg1 + 0xc, esi_1) != 0)
            (*(esi_1->vFunc_0 + 4))()
            int32_t eax_5
            eax_5.b = true
            return 1
        
        (*(esi_1->vFunc_0 + 4))()
        int32_t eax_7
        eax_7.b = false
        return 0

int32_t* eax_1
eax_1.b = 0
return eax_1
