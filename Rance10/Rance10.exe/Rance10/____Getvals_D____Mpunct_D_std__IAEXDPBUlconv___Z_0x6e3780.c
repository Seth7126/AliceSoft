// 函数: ??$_Getvals@D@?$_Mpunct@D@std@@IAEXDPBUlconv@@@Z
// 地址: 0x6e3780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax

if (*(arg1 + 0x28) == 0)
    eax = *(arg2 + 0x10)
else
    eax = *(arg2 + 0xc)

void* var_14 = arg1 + 0x2c
int32_t var_18 = 0
*(arg1 + 0x10) = std::_Maklocstr<char>(eax)
void* const eax_2 = &data_794c78

if (*(arg2 + 0x2e) u<= 4)
    eax_2 = *(arg2 + 0x20)

void* var_14_1 = arg1 + 0x2c
int32_t var_18_1 = 0
*(arg1 + 0x14) = std::_Maklocstr<char>(eax_2)
void* const eax_4 = &data_7503dc

if (*(arg2 + 0x2f) u<= 4)
    eax_4 = *(arg2 + 0x24)

void* var_14_2 = arg1 + 0x2c
int32_t var_18_2 = 0
*(arg1 + 0x18) = std::_Maklocstr<char>(eax_4)
char* eax_6
eax_6.b = **(arg2 + 0x14)
*(arg1 + 0xc) = eax_6.b
char* result
result.b = **(arg2 + 0x18)
*(arg1 + 0xd) = result.b
return result
