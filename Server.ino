// Game Plan
//
// What does the sever need to do?
//  -Server needs to attach to spectrum-ff wifi, choose a STATIC ip
//  -Needs to listen for clients at all times
//  -Needs to parse .json files
//    * Needs to recognize beginning of message (aka: what is the header format)
//    * Needs to recongize when the end of a message is (aka: are we seeing a space)
//    * If message is POST
//      Parse and gather the relevant information
//    * If message is GET
//      Send the HTML code over to client to render the website and information
