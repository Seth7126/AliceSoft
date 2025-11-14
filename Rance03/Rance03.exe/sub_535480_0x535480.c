// 函数: sub_535480
// 地址: 0x535480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg3
int32_t* edi = arg4
int32_t ebx
ebx.b = (*(*esi + 4))()
char eax_3 = (*(*edi + 4))()

if (ebx.b != 0)
    if (eax_3 == 0)
        return 0
    
    (*(*esi + 8))()
    (*(*edi + 8))()
    int32_t result
    result.b = fconvert.s(arg1) > fconvert.s(arg2)
    return result

if (eax_3 != 0)
    return 1

int32_t eax_9 = (*(*esi + 0xc))(0)
int32_t eax_10 = (*(*edi + 0xc))(0)
bool c_1

if (eax_9 != 0 && eax_10 != 0)
    c_1 = eax_9 u< eax_10

if (eax_9 == 0 || eax_10 == 0 || eax_9 == eax_10)
    int32_t eax_12 = (*(*esi + 0xc))(1)
    eax_10 = (*(*edi + 0xc))(1)
    c_1 = eax_12 u< eax_10

return neg.d(sbb.d(eax_10, eax_10, c_1))
