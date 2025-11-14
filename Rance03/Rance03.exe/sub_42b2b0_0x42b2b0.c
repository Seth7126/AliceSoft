// 函数: sub_42b2b0
// 地址: 0x42b2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
int32_t edx_3 = edx_2 s>> 3
uint32_t eax_2 = edx_3 u>> 0x1f

if (eax_2 == neg.d(edx_3))
    return eax_2 + edx_3

int32_t* edi_1 = nullptr
int32_t result

do
    if ((***(edi_1 + arg1[0x3d]))() == arg2)
        return sub_42b330(arg1, ebx)
    
    ebx += 1
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
    edi_1 = &edi_1[9]
    int32_t edx_5 = edx_4 s>> 3
    result = (edx_5 u>> 0x1f) + edx_5
while (ebx u< result)

return result
