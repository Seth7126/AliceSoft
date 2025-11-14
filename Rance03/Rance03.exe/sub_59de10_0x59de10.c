// 函数: sub_59de10
// 地址: 0x59de10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
int32_t edx_2 = (ecx - *arg1) s>> 4

if (edx_2 u> 6)
    arg1[1] = ((6 - edx_2) << 4) + ecx
    return 

if (edx_2 u>= 6)
    return 

sub_59de80(arg1, 6 - edx_2)
void* ecx_3 = arg1[1]
int32_t* var_10_2 = arg1
sub_59df80(ecx_3, 6 - ((ecx_3 - *arg1) s>> 4))
arg1[1] += (6 - ((arg1[1] - *arg1) s>> 4)) << 4
