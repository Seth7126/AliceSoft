// 函数: sub_100072bb
// 地址: 0x100072bb
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_8 = edi
int32_t i = 0
int32_t edi_1 = 0x10022208

do
    if (*((i << 3) + &data_10020334) == 1)
        *((i << 3) + &data_10020330) = edi_1
        edi_1 += 0x18
        
        if (sub_1000930b(*((i << 3) + &data_10020330), 0xfa0) == 0)
            *((i << 3) + &data_10020330) = 0
            return 0
    
    i += 1
while (i s< 0x24)

return 1
