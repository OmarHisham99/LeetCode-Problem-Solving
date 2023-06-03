/**
 * @param {number} millis
 */
async function sleep(millis) {
   return new Promise(resolver=>setTimeout(resolver,millis))
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */