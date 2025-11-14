// 函数: sub_586fa0
// 地址: 0x586fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t* ecx = *(arg1 + 0x228)

if (ecx != 0)
    ecx = (**ecx)()

int32_t edx = *(arg1 + 0x22c)

if (edx != 0)
    void* eax_4 = ecx - edx
    *(arg1 + 0x230) = eax_4
    
    if (ecx == edx)
        *(arg1 + 0x230) = 1
    else if (eax_4 u> 0x64)
        *(arg1 + 0x230) = 0x64
else
    *(arg1 + 0x230) = 1

int32_t var_14 = *(arg1 + 0x234)
*(arg1 + 0x22c) = ecx
int32_t var_18 = *(arg1 + 0x230)
data_74b43c = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_5
int32_t edx_1
eax_5, edx_1 = sub_544780(arg1 + 8, var_18, var_14)

if (eax_5.b != 0)
    sub_59f610()
    enum MESSAGEBOX_RESULT eax_7
    eax_7.b = 1
    data_74b43c = 1
    return eax_7

sub_59f4e0(eax_5, edx_1, arg1 + 8, 0x6e57bc, arg2)
sub_59f610()
enum MESSAGEBOX_RESULT eax_6
eax_6.b = 0
data_74b43c = 1
return eax_6
