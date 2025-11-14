// 函数: sub_61b1f0
// 地址: 0x61b1f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = arg1[0xe].b == 0
*arg1 = &graphengined3d11::CViewport::CImpl::`vftable'

if (not(cond:0))
    void* esi_1 = arg1[1]
    int32_t* eax_1 = *(esi_1 + 0x38)
    (*(*eax_1 + 0xb0))(eax_1, 1, &arg1[8])
    *(esi_1 + 0x10) = int.d(fconvert.t(arg1[0xa]))
    *(esi_1 + 0x14) = int.d(fconvert.t(arg1[0xb]))
    arg1[0xe].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
