import React from 'react';
import { useState } from 'react'

function Message({messageData,messageType}){
    return(
        <div>
            <h2>Our own component</h2>
            <p>{messageData}</p>
            <p>{messageType}</p>
        </div>
    );
}
export default Message;