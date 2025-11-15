// 函数: sub_5e53d0
// 地址: 0x5e53d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = data_7fd4cc + 0x54
int32_t i = 0

if (((result[1] - *result) & 0xfffffff8) s> 0)
    do
        if (i s>= 0 && i s< (result[1] - *result) s>> 3)
            int32_t* edi_1 = *result + (i << 3)
            __Smtx_lock_shared(&edi_1[1])
            void* edi_2 = *edi_1
            __Smtx_unlock_shared(&edi_1[1])
            
            if (edi_2 != 0)
                *(edi_2 + 0x1ec) = arg1
        
        i += 1
        result = data_7fd4cc + 0x54
    while (i s< (result[1] - *result) s>> 3)

return result
