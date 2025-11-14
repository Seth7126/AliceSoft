// 函数: sub_10005861
// 地址: 0x10005861
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_8 = edi

for (int32_t* i = &data_10023540; i s< &data_10023640; i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0)
        for (void* j = edi_1 + 0x800; edi_1 u< j; j = *i + 0x800)
            if (*(edi_1 + 8) != 0)
                DeleteCriticalSection(edi_1 + 0xc)
            
            edi_1 += 0x40
        
        sub_10003602(*i)
        *i = 0
