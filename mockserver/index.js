const express = require('express')
const app = express()

const PORT = 5000

app.use(express.json())
app.use(express.urlencoded({extended: true}))

app.get('/', (req, res) => {
    res.status(200).send('Welcome to Baz Home!')
})

app.get('/get', (req, res)=> {
    res.status(200).send('Get Request Serverd!')
})

app.post('/post', (req, res)=> {
    let myJSON = req.body
    res.status(200).send(myJSON)
})

app.post('/postform', (req, res)=> {
    res.status(200).send(JSON.stringify(req.body))
})

app.listen(PORT, () => {
    console.log('Server Running...')
})