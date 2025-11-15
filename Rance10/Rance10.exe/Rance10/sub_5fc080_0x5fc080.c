// 函数: sub_5fc080
// 地址: 0x5fc080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]

for (int32_t* i = *arg1; i != ebx; i = &i[0xe])
    (**i)(0)

arg1[1] = *arg1
int32_t ebx_1 = arg1[4]
int32_t* esi = arg1[3]

if (esi == ebx_1)
    arg1[4] = esi
    return esi

do
    sub_5fc940(esi)
    esi = &esi[3]
while (esi != ebx_1)

int32_t eax_3 = arg1[3]
arg1[4] = eax_3
return eax_3
