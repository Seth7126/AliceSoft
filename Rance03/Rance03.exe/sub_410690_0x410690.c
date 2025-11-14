// 函数: sub_410690
// 地址: 0x410690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x8d3dcb09, esi_1)

if (esi_1 s/ 0x74 u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x74

if (0x234f72c - ecx_5 u>= arg2)
    return sub_410590(arg1, sub_410770(arg1, ecx_5 + arg2))

sub_69a551("vector<T> too long")
noreturn
