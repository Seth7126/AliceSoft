// 函数: sub_61b340
// 地址: 0x61b340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = *(arg1 + 0xc)

if (*(ebx + 0x38) != 0)
    void* esi_1 = *(ebx + 4)
    int32_t* eax = *(esi_1 + 0x38)
    (*(*eax + 0xb0))(eax, 1, ebx + 0x20)
    *(esi_1 + 0x10) = int.d(fconvert.t(*(ebx + 0x28)))
    *(esi_1 + 0x14) = int.d(fconvert.t(*(ebx + 0x2c)))
    *(ebx + 0x38) = 0

int32_t result
result.b = 1
return result
