// 函数: sub_5872a0
// 地址: 0x5872a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t esi_2 = (edx - *arg1) s>> 3

if (esi_2 u> arg2)
    int32_t var_10_1 = arg2
    int32_t* var_14_1 = arg1
    void* esi_3 = edx + ((arg2 - esi_2) << 3)
    Concurrency::details::Etw::Etw(esi_3, edx)
    arg1[1] = esi_3
    return 

if (esi_2 u>= arg2)
    return 

sub_587320(arg1, arg2 - esi_2)
int32_t* ecx_1 = arg1[1]
int32_t var_10_3 = arg2
int32_t* var_14_2 = ecx_1
sub_56a3a0(ecx_1, arg2 - ((ecx_1 - *arg1) s>> 3))
arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 3)) << 3
