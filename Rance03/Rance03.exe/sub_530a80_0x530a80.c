// 函数: sub_530a80
// 地址: 0x530a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CDetectPolygonMap::`vftable'
sub_530cc0(arg1)
int32_t eax = arg1[0x10]

if (eax != 0)
    j__free(eax)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t eax_1 = arg1[0xd]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t* ecx = arg1[4]

if (ecx != 0)
    struct sealengine::CDetectPolygonMap::VTable** var_c_3 = arg1
    int32_t* var_10_1 = ecx
    sub_48c2c0(ecx, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

return sub_530760(&arg1[1]) __tailcall
