// 函数: sub_606380
// 地址: 0x606380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2
int32_t ecx = arg1[1]
int32_t edi_2 = (ecx - *arg1) s>> 4

if (edi_2 u> esi)
    int32_t __saved_ebp = arg2
    void* esi_3 = ((esi - edi_2) << 4) + ecx
    int32_t var_14_1 = ecx
    sub_570210(esi_3, ecx)
    arg1[1] = esi_3
    return 

if (edi_2 u>= esi)
    return 

int32_t ebp_1 = arg1[2]
int32_t edx_3 = esi - edi_2

if ((ebp_1 - ecx) s>> 4 u< edx_3)
    if (0xfffffff - edi_2 u< edx_3)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edx_4 = edx_3 + edi_2
    int32_t ebp_3 = (ebp_1 - *arg1) s>> 4
    uint32_t eax_7 = ebp_3 u>> 1
    arg2 = 0xfffffff - eax_7
    int32_t ecx_3 = 0
    
    if (arg2 u>= ebp_3)
        ecx_3 = eax_7 + ebp_3
    
    if (ecx_3 u>= edx_4)
        edx_4 = ecx_3
    
    sub_606b20(arg1, edx_4)

void* ecx_5 = arg1[1]
int32_t var_14_3 = arg2
void* var_18_1 = ecx_5
sub_606ce0(ecx_5, esi - ((ecx_5 - *arg1) s>> 4))
arg1[1] += (esi - ((arg1[1] - *arg1) s>> 4)) << 4
