// 函数: __FF_MSGBANNER
// 地址: 0x6a5480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t* result

if (__set_error_mode(3) == 1)
    __NMSG_WRITE(0xfc)
    result = __NMSG_WRITE(0xff)
else
    result = __set_error_mode(3)
    
    if (result == 0 && data_75cb48 == 1)
        __NMSG_WRITE(0xfc)
        result = __NMSG_WRITE(0xff)

return result
