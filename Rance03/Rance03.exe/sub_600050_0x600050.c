// 函数: sub_600050
// 地址: 0x600050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 8) = *(arg1 + 4)
*(arg1 + 0x10) = 0
struct crayfish::CLogLine::VTable** eax_3 = sub_69adc6(0x1c)

if (eax_3 == 0)
    eax_3 = nullptr
else
    *eax_3 = &crayfish::CLogLine::`vftable'
    eax_3[6] = 0xf
    eax_3[5] = 0
    eax_3[1].b = 0

var_4 = eax_3
sub_412de0(arg1 + 4, &var_4)
*(arg1 + 0x10) = 0
int32_t result
result.b = 1
return result
